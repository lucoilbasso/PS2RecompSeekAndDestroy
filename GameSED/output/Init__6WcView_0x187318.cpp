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

// Function: Init__6WcView
// Address: 0x187318 - 0x187384
void Init__6WcView_0x187318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__6WcView_0x187318");
#endif

    switch (ctx->pc) {
        case 0x18732cu: goto label_18732c;
        case 0x187374u: goto label_187374;
        default: break;
    }

    ctx->pc = 0x187318u;

    // 0x187318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18731c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187320: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x187320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x187324: 0xc061258  jal         func_184960
    ctx->pc = 0x187324u;
    SET_GPR_U32(ctx, 31, 0x18732Cu);
    ctx->pc = 0x187328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187324u;
    // 0x187328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x187324u, 0x18732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18732Cu;
label_18732c:
    // 0x18732c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18732cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x187330: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x187330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x187334: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x187334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x187338: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x187338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18733c: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x18733cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x187340: 0x3c0143f0  lui         $at, 0x43F0
    ctx->pc = 0x187340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17392 << 16));
    // 0x187344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x187344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18734c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x18734cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x187350: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x187350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x187354: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x187354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x187358: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x187358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18735c: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x18735cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x187360: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x187360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x187364: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x187364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x187368: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x187368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x18736c: 0xc061a60  jal         func_186980
    ctx->pc = 0x18736Cu;
    SET_GPR_U32(ctx, 31, 0x187374u);
    ctx->pc = 0x187370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18736Cu;
    // 0x187370: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186980u, 0x18736Cu, 0x187374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187374u;
label_187374:
    // 0x187374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18737c: 0x3e00008  jr          $ra
    ctx->pc = 0x18737Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18737Cu;
        // 0x187380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18737Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187384u;
}
