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

// Function: entry_0016e178
// Address: 0x16e178 - 0x16e1c0
void entry_0016e178_0x16e178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e178_0x16e178");
#endif

    ctx->pc = 0x16e178u;

label_16e178:
    // 0x16e178: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16e178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e17c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x16e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x16e180: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x16e180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16e184: 0x0  nop
    ctx->pc = 0x16e184u;
    // NOP
    // 0x16e188: 0x0  nop
    ctx->pc = 0x16e188u;
    // NOP
    // 0x16e18c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16E18Cu;
    {
        const bool branch_taken_0x16e18c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E18Cu;
        // 0x16e190: 0xac4500e0  sw          $a1, 0xE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e18c) {
            ctx->pc = 0x16E178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e178;
        }
    }
    ctx->pc = 0x16E194u;
    // 0x16e194: 0xc62102e8  lwc1        $f1, 0x2E8($s1)
    ctx->pc = 0x16e194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e19c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16e19cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e1a0: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x16E1A0u;
    {
        const bool branch_taken_0x16e1a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e1a0) {
            ctx->pc = 0x16E1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E1A0u;
            // 0x16e1a4: 0x8e2302d8  lw          $v1, 0x2D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E1C0u;
            return;
        }
    }
    ctx->pc = 0x16E1A8u;
    // 0x16e1a8: 0x8e2402dc  lw          $a0, 0x2DC($s1)
    ctx->pc = 0x16e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x16e1ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e1b0: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x16e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x16e1b4: 0xac4300e0  sw          $v1, 0xE0($v0)
    ctx->pc = 0x16e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
    // 0x16e1b8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x16E1B8u;
    {
        const bool branch_taken_0x16e1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1B8u;
        // 0x16e1bc: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1b8) {
            ctx->pc = 0x16E3B8u;
            return;
        }
    }
    ctx->pc = 0x16E1C0u;
}
