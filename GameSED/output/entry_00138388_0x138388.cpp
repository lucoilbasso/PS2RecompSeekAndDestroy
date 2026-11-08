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

// Function: entry_00138388
// Address: 0x138388 - 0x1383d0
void entry_00138388_0x138388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138388_0x138388");
#endif

    switch (ctx->pc) {
        case 0x138390u: goto label_138390;
        default: break;
    }

    ctx->pc = 0x138388u;

    // 0x138388: 0xc04de22  jal         func_137888
    ctx->pc = 0x138388u;
    SET_GPR_U32(ctx, 31, 0x138390u);
    ctx->pc = 0x13838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138388u;
    // 0x13838c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137888u, 0x138388u, 0x138390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138390u;
label_138390:
    // 0x138390: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x138390u;
    {
        const bool branch_taken_0x138390 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x138394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138390u;
        // 0x138394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138390) {
            ctx->pc = 0x138460u;
            return;
        }
    }
    ctx->pc = 0x138398u;
    // 0x138398: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x13839c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13839cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383a0: 0x2447bc50  addiu       $a3, $v0, -0x43B0
    ctx->pc = 0x1383a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949968));
    // 0x1383a4: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x1383a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC050u));
    // 0x1383a8: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1383A8u;
    {
        const bool branch_taken_0x1383a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1383ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383A8u;
        // 0x1383ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383a8) {
            ctx->pc = 0x138458u;
            return;
        }
    }
    ctx->pc = 0x1383B0u;
    // 0x1383b0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1383b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1383b4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1383b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1383b8: 0x2446a390  addiu       $a2, $v0, -0x5C70
    ctx->pc = 0x1383b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x1383bc: 0x240a2118  addiu       $t2, $zero, 0x2118
    ctx->pc = 0x1383bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x1383c0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1383c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1383c4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1383c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1383c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1383cc: 0x0  nop
    ctx->pc = 0x1383ccu;
    // NOP
    ctx->pc = 0x1383d0u;
}
