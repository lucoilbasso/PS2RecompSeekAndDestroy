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

// Function: entry_00138998
// Address: 0x138998 - 0x1389cc
void entry_00138998_0x138998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138998_0x138998");
#endif

    switch (ctx->pc) {
        case 0x1389a8u: goto label_1389a8;
        case 0x1389b0u: goto label_1389b0;
        case 0x1389bcu: goto label_1389bc;
        default: break;
    }

    ctx->pc = 0x138998u;

    // 0x138998: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x138998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13899c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13899cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1389a0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1389A0u;
    SET_GPR_U32(ctx, 31, 0x1389A8u);
    ctx->pc = 0x1389A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389A0u;
    // 0x1389a4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1389A0u, 0x1389A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389A8u;
label_1389a8:
    // 0x1389a8: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x1389A8u;
    SET_GPR_U32(ctx, 31, 0x1389B0u);
    ctx->pc = 0x1389ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389A8u;
    // 0x1389ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x1389A8u, 0x1389B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389B0u;
label_1389b0:
    // 0x1389b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1389b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1389b4: 0xc04e1ee  jal         func_1387B8
    ctx->pc = 0x1389B4u;
    SET_GPR_U32(ctx, 31, 0x1389BCu);
    ctx->pc = 0x1389B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389B4u;
    // 0x1389b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1387B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1387B8u, 0x1389B4u, 0x1389BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389BCu;
label_1389bc:
    // 0x1389bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1389bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1389c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1389c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1389c4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1389C4u;
    {
        const bool branch_taken_0x1389c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1389c4) {
            ctx->pc = 0x1389C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1389C4u;
            // 0x1389c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1389CCu;
            return;
        }
    }
    ctx->pc = 0x1389CCu;
}
