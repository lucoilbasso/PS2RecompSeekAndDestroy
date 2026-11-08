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

// Function: entry_001d9950
// Address: 0x1d9950 - 0x1d9978
void entry_001d9950_0x1d9950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9950_0x1d9950");
#endif

    ctx->pc = 0x1d9950u;

label_1d9950:
    // 0x1d9950: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1d9950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9954: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9954u;
    {
        const bool branch_taken_0x1d9954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9954u;
        // 0x1d9958: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9954) {
            ctx->pc = 0x1D9978u;
            return;
        }
    }
    ctx->pc = 0x1D995Cu;
    // 0x1d995c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d9960: 0x0  nop
    ctx->pc = 0x1d9960u;
    // NOP
    // 0x1d9964: 0x0  nop
    ctx->pc = 0x1d9964u;
    // NOP
    // 0x1d9968: 0x0  nop
    ctx->pc = 0x1d9968u;
    // NOP
    // 0x1d996c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D996Cu;
    {
        const bool branch_taken_0x1d996c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d996c) {
            ctx->pc = 0x1D9970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D996Cu;
            // 0x1d9970: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9950;
        }
    }
    ctx->pc = 0x1D9974u;
    // 0x1d9974: 0x8c820898  lw          $v0, 0x898($a0)
    ctx->pc = 0x1d9974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    ctx->pc = 0x1d9978u;
}
