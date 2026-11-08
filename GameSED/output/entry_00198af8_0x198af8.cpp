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

// Function: entry_00198af8
// Address: 0x198af8 - 0x198b14
void entry_00198af8_0x198af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198af8_0x198af8");
#endif

    ctx->pc = 0x198af8u;

label_198af8:
    // 0x198af8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198afc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198b00: 0x0  nop
    ctx->pc = 0x198b00u;
    // NOP
    // 0x198b04: 0x0  nop
    ctx->pc = 0x198b04u;
    // NOP
    // 0x198b08: 0x0  nop
    ctx->pc = 0x198b08u;
    // NOP
    // 0x198b0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198B0Cu;
    {
        const bool branch_taken_0x198b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B0Cu;
        // 0x198b10: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b0c) {
            ctx->pc = 0x198AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198af8;
        }
    }
    ctx->pc = 0x198B14u;
}
