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

// Function: entry_001619c0
// Address: 0x1619c0 - 0x161a00
void entry_001619c0_0x1619c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001619c0_0x1619c0");
#endif

    ctx->pc = 0x1619c0u;

    // 0x1619c0: 0x8e8219dc  lw          $v0, 0x19DC($s4)
    ctx->pc = 0x1619c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6620)));
    // 0x1619c4: 0x1582007c  bne         $t4, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x1619C4u;
    {
        const bool branch_taken_0x1619c4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x1619C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619C4u;
        // 0x1619c8: 0xad400020  sw          $zero, 0x20($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619c4) {
            ctx->pc = 0x161BB8u;
            return;
        }
    }
    ctx->pc = 0x1619CCu;
    // 0x1619cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1619ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1619d0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1619d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1619d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1619d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619d8: 0x8e8311b0  lw          $v1, 0x11B0($s4)
    ctx->pc = 0x1619d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4528)));
    // 0x1619dc: 0xad4e0020  sw          $t6, 0x20($t2)
    ctx->pc = 0x1619dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 14));
    // 0x1619e0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1619e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1619e4: 0x18600027  blez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1619E4u;
    {
        const bool branch_taken_0x1619e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1619E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619E4u;
        // 0x1619e8: 0x46002906  mov.s       $f4, $f5 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619e4) {
            ctx->pc = 0x161A84u;
            return;
        }
    }
    ctx->pc = 0x1619ECu;
    // 0x1619ec: 0xc786831c  lwc1        $f6, -0x7CE4($gp)
    ctx->pc = 0x1619ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1619f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1619f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619f4: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x1619f4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
    // 0x1619f8: 0x268311c0  addiu       $v1, $s4, 0x11C0
    ctx->pc = 0x1619f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4544));
    // 0x1619fc: 0x0  nop
    ctx->pc = 0x1619fcu;
    // NOP
    ctx->pc = 0x161a00u;
}
