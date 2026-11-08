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

// Function: entry_0019b160
// Address: 0x19b160 - 0x19b190
void entry_0019b160_0x19b160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b160_0x19b160");
#endif

    ctx->pc = 0x19b160u;

label_19b160:
    // 0x19b160: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b164: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x19b164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x19b168: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x19b168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19b16c: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x19b16cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b170: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x19b170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19b174: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x19b174u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x19b178: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x19b178u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19b17c: 0x24e4ffd0  addiu       $a0, $a3, -0x30
    ctx->pc = 0x19b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x19b180: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x19b180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x19b184: 0x2c84000a  sltiu       $a0, $a0, 0xA
    ctx->pc = 0x19b184u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b188: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x19B188u;
    {
        const bool branch_taken_0x19b188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B188u;
        // 0x19b18c: 0x2446ffd0  addiu       $a2, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b188) {
            ctx->pc = 0x19B160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b160;
        }
    }
    ctx->pc = 0x19B190u;
}
