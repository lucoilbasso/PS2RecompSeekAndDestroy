#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0019b100
// Address: 0x19b100 - 0x19b130
void entry_0019b100_0x19b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b100_0x19b100");
#endif

    ctx->pc = 0x19b100u;

label_19b100:
    // 0x19b100: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b104: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x19b104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x19b108: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x19b108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x19b10c: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x19b10cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b110: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19b110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19b114: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x19b114u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x19b118: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x19b118u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19b11c: 0x24c4ffd0  addiu       $a0, $a2, -0x30
    ctx->pc = 0x19b11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x19b120: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x19b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x19b124: 0x2c84000a  sltiu       $a0, $a0, 0xA
    ctx->pc = 0x19b124u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b128: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19B128u;
    {
        const bool branch_taken_0x19b128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B128u;
        // 0x19b12c: 0x2447ffd0  addiu       $a3, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b128) {
            ctx->pc = 0x19B100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b100;
        }
    }
    ctx->pc = 0x19B130u;
}
