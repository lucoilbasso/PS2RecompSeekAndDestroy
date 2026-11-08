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

// Function: entry_0013d5bc
// Address: 0x13d5bc - 0x13d668
void entry_0013d5bc_0x13d5bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d5bc_0x13d5bc");
#endif

    switch (ctx->pc) {
        case 0x13d604u: goto label_13d604;
        case 0x13d620u: goto label_13d620;
        case 0x13d640u: goto label_13d640;
        case 0x13d65cu: goto label_13d65c;
        case 0x13d664u: goto label_13d664;
        default: break;
    }

    ctx->pc = 0x13d5bcu;

    // 0x13d5bc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d5bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d5c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13d5c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d5c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13d5cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13d5d0: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x13d5d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13d5d4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x13D5D4u;
    {
        const bool branch_taken_0x13d5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5D4u;
        // 0x13d5d8: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5d4) {
            ctx->pc = 0x13D668u;
            return;
        }
    }
    ctx->pc = 0x13D5DCu;
    // 0x13d5dc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13d5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13d5e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13d5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5e4: 0x8f908a48  lw          $s0, -0x75B8($gp)
    ctx->pc = 0x13d5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937160)));
    // 0x13d5e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5ec: 0xc7958a50  lwc1        $f21, -0x75B0($gp)
    ctx->pc = 0x13d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13d5f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13d5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d5f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d5fc: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x13D5FCu;
    SET_GPR_U32(ctx, 31, 0x13D604u);
    ctx->pc = 0x13D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D5FCu;
    // 0x13d600: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D330u, 0x13D5FCu, 0x13D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D604u;
label_13d604:
    // 0x13d604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13d604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d608: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d60c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x13d60cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x13d610: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13d614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d618: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x13D618u;
    SET_GPR_U32(ctx, 31, 0x13D620u);
    ctx->pc = 0x13D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D618u;
    // 0x13d61c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D330u, 0x13D618u, 0x13D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D620u;
label_13d620:
    // 0x13d620: 0x8f908a4c  lw          $s0, -0x75B4($gp)
    ctx->pc = 0x13d620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937164)));
    // 0x13d624: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d62c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d630: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13d630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d634: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d634u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d638: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x13D638u;
    SET_GPR_U32(ctx, 31, 0x13D640u);
    ctx->pc = 0x13D63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D638u;
    // 0x13d63c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D330u, 0x13D638u, 0x13D640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D640u;
label_13d640:
    // 0x13d640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d644: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d644u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d648: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13d648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d64c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d650: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13d650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d654: 0xc04f4cc  jal         func_13D330
    ctx->pc = 0x13D654u;
    SET_GPR_U32(ctx, 31, 0x13D65Cu);
    ctx->pc = 0x13D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D654u;
    // 0x13d658: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D330u, 0x13D654u, 0x13D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D65Cu;
label_13d65c:
    // 0x13d65c: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x13D65Cu;
    SET_GPR_U32(ctx, 31, 0x13D664u);
    ctx->pc = 0x13D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D65Cu;
    // 0x13d660: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x13D65Cu, 0x13D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D664u;
label_13d664:
    // 0x13d664: 0xaf808a44  sw          $zero, -0x75BC($gp)
    ctx->pc = 0x13d664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937156), GPR_U32(ctx, 0));
    ctx->pc = 0x13d668u;
}
