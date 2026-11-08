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

// Function: entry_00139180
// Address: 0x139180 - 0x1391d4
void entry_00139180_0x139180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139180_0x139180");
#endif

    switch (ctx->pc) {
        case 0x139190u: goto label_139190;
        case 0x1391d0u: goto label_1391d0;
        default: break;
    }

    ctx->pc = 0x139180u;

    // 0x139180: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x139180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x139184: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x139184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x139188: 0xc04dbd2  jal         func_136F48
    ctx->pc = 0x139188u;
    SET_GPR_U32(ctx, 31, 0x139190u);
    ctx->pc = 0x13918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139188u;
    // 0x13918c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x139188u, 0x139190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139190u;
label_139190:
    // 0x139190: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x139190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x139194: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x139194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139198: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x139198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x13919c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13919cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1391a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1391A0u;
    {
        const bool branch_taken_0x1391a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391A0u;
        // 0x1391a4: 0x24a58f98  addiu       $a1, $a1, -0x7068 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391a0) {
            ctx->pc = 0x1391D4u;
            return;
        }
    }
    ctx->pc = 0x1391A8u;
    // 0x1391a8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1391a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1391ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1391acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1391b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1391b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1391b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1391b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1391b8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1391b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1391bc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1391bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1391c0: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1391c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1391c4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1391c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1391c8: 0xc04dea6  jal         func_137A98
    ctx->pc = 0x1391C8u;
    SET_GPR_U32(ctx, 31, 0x1391D0u);
    ctx->pc = 0x1391CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1391C8u;
    // 0x1391cc: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x137A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A98u, 0x1391C8u, 0x1391D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1391D0u;
label_1391d0:
    // 0x1391d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1391d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1391d4u;
}
