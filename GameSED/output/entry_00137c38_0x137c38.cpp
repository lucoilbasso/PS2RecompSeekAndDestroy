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

// Function: entry_00137c38
// Address: 0x137c38 - 0x137c5c
void entry_00137c38_0x137c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137c38_0x137c38");
#endif

    ctx->pc = 0x137c38u;

label_137c38:
    // 0x137c38: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x137c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137c3c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x137c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137c40: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x137C40u;
    {
        const bool branch_taken_0x137c40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137c40) {
            ctx->pc = 0x137C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137C40u;
            // 0x137c44: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137C60u;
            return;
        }
    }
    ctx->pc = 0x137C48u;
    // 0x137c48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x137c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x137c4c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x137c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x137c50: 0x0  nop
    ctx->pc = 0x137c50u;
    // NOP
    // 0x137c54: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x137C54u;
    {
        const bool branch_taken_0x137c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C54u;
        // 0x137c58: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c54) {
            ctx->pc = 0x137C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137c38;
        }
    }
    ctx->pc = 0x137C5Cu;
}
