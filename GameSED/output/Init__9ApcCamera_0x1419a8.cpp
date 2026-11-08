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

// Function: Init__9ApcCamera
// Address: 0x1419a8 - 0x141a00
void Init__9ApcCamera_0x1419a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9ApcCamera_0x1419a8");
#endif

    switch (ctx->pc) {
        case 0x1419bcu: goto label_1419bc;
        default: break;
    }

    ctx->pc = 0x1419a8u;

    // 0x1419a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1419a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1419ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1419acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1419b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1419b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1419b4: 0xc061cc6  jal         func_187318
    ctx->pc = 0x1419B4u;
    SET_GPR_U32(ctx, 31, 0x1419BCu);
    ctx->pc = 0x1419B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1419B4u;
    // 0x1419b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187318u, 0x1419B4u, 0x1419BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419BCu;
label_1419bc:
    // 0x1419bc: 0x24020126  addiu       $v0, $zero, 0x126
    ctx->pc = 0x1419bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x1419c0: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x1419c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x1419c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1419c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1419c8: 0x260301e0  addiu       $v1, $s0, 0x1E0
    ctx->pc = 0x1419c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x1419cc: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x1419ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x1419d0: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x1419d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x1419d4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1419d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1419d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1419d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1419dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1419dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1419e0: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x1419e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x1419e4: 0xe6000204  swc1        $f0, 0x204($s0)
    ctx->pc = 0x1419e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 516), bits); }
    // 0x1419e8: 0xae0001f4  sw          $zero, 0x1F4($s0)
    ctx->pc = 0x1419e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 0));
    // 0x1419ec: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x1419ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x1419f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1419f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1419f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1419f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1419f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1419F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1419FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419F8u;
        // 0x1419fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1419F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141A00u;
}
