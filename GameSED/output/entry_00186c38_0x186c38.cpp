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

// Function: entry_00186c38
// Address: 0x186c38 - 0x186cb8
void entry_00186c38_0x186c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186c38_0x186c38");
#endif

    switch (ctx->pc) {
        case 0x186c88u: goto label_186c88;
        case 0x186c98u: goto label_186c98;
        case 0x186cb0u: goto label_186cb0;
        default: break;
    }

    ctx->pc = 0x186c38u;

    // 0x186c38: 0x26620160  addiu       $v0, $s3, 0x160
    ctx->pc = 0x186c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
    // 0x186c3c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x186c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186c40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x186c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186c44: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x186c44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x186c48: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x186c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186c4c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x186c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186c50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x186c50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x186c54: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x186c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x186c58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x186c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x186c5c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x186c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x186c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c64: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x186c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x186c68: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x186c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186c6c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x186c6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x186c70: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x186c70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x186c74: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x186c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186c78: 0xe7a4004c  swc1        $f4, 0x4C($sp)
    ctx->pc = 0x186c78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x186c7c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x186c7cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x186c80: 0xc06eea6  jal         func_1BBA98
    ctx->pc = 0x186C80u;
    SET_GPR_U32(ctx, 31, 0x186C88u);
    ctx->pc = 0x186C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C80u;
    // 0x186c84: 0xe7a30048  swc1        $f3, 0x48($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA98u, 0x186C80u, 0x186C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C88u;
label_186c88:
    // 0x186c88: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x186c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186c8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x186c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x186c90: 0xc06ef22  jal         func_1BBC88
    ctx->pc = 0x186C90u;
    SET_GPR_U32(ctx, 31, 0x186C98u);
    ctx->pc = 0x186C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C90u;
    // 0x186c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC88u, 0x186C90u, 0x186C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C98u;
label_186c98:
    // 0x186c98: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x186c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x186c9c: 0x2484eb70  addiu       $a0, $a0, -0x1490
    ctx->pc = 0x186c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962032));
    // 0x186ca0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x186ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ca4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x186ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ca8: 0xc06f004  jal         func_1BC010
    ctx->pc = 0x186CA8u;
    SET_GPR_U32(ctx, 31, 0x186CB0u);
    ctx->pc = 0x186CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CA8u;
    // 0x186cac: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC010u, 0x186CA8u, 0x186CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CB0u;
label_186cb0:
    // 0x186cb0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x186CB0u;
    {
        const bool branch_taken_0x186cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CB0u;
        // 0x186cb4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cb0) {
            ctx->pc = 0x186D1Cu;
            return;
        }
    }
    ctx->pc = 0x186CB8u;
}
