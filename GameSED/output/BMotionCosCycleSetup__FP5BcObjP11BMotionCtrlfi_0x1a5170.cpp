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

// Function: BMotionCosCycleSetup__FP5BcObjP11BMotionCtrlfi
// Address: 0x1a5170 - 0x1a51e4
void BMotionCosCycleSetup__FP5BcObjP11BMotionCtrlfi_0x1a5170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionCosCycleSetup__FP5BcObjP11BMotionCtrlfi_0x1a5170");
#endif

    switch (ctx->pc) {
        case 0x1a51a4u: goto label_1a51a4;
        default: break;
    }

    ctx->pc = 0x1a5170u;

    // 0x1a5170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5174: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a5174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5178: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a5178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a517c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a517cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5180: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a5180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5184: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a5184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5188: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a5188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a518c: 0x24465080  addiu       $a2, $v0, 0x5080
    ctx->pc = 0x1a518cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20608));
    // 0x1a5190: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a5190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a5194: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a5194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a5198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a5198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a519c: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A519Cu;
    SET_GPR_U32(ctx, 31, 0x1A51A4u);
    ctx->pc = 0x1A51A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A519Cu;
    // 0x1a51a0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A519Cu, 0x1A51A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51A4u;
label_1a51a4:
    // 0x1a51a4: 0x8f839070  lw          $v1, -0x6F90($gp)
    ctx->pc = 0x1a51a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
    // 0x1a51a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a51a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a51ac: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1a51acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a51b0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1a51b0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a51b4: 0x1012  mflo        $v0
    ctx->pc = 0x1a51b4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a51b8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A51B8u;
    {
        const bool branch_taken_0x1a51b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a51b8) {
            ctx->pc = 0x1A51BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A51B8u;
            // 0x1a51bc: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A51C0u;
            goto label_1a51c0;
        }
    }
    ctx->pc = 0x1A51C0u;
label_1a51c0:
    // 0x1a51c0: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x1a51c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1a51c4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A51C4u;
    {
        const bool branch_taken_0x1a51c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a51c4) {
            ctx->pc = 0x1A51C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A51C4u;
            // 0x1a51c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A51CCu;
            goto label_1a51cc;
        }
    }
    ctx->pc = 0x1A51CCu;
label_1a51cc:
    // 0x1a51cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a51ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a51d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a51d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a51d4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1a51d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a51d8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1a51d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1a51dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A51DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51DCu;
        // 0x1a51e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A51DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A51E4u;
}
