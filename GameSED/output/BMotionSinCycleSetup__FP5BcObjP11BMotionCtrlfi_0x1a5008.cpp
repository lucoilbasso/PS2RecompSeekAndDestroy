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

// Function: BMotionSinCycleSetup__FP5BcObjP11BMotionCtrlfi
// Address: 0x1a5008 - 0x1a507c
void BMotionSinCycleSetup__FP5BcObjP11BMotionCtrlfi_0x1a5008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionSinCycleSetup__FP5BcObjP11BMotionCtrlfi_0x1a5008");
#endif

    switch (ctx->pc) {
        case 0x1a503cu: goto label_1a503c;
        default: break;
    }

    ctx->pc = 0x1a5008u;

    // 0x1a5008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a500c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a500cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5010: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a5010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a5014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5018: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a5018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a501c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a501cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5020: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a5020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5024: 0x24464f38  addiu       $a2, $v0, 0x4F38
    ctx->pc = 0x1a5024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20280));
    // 0x1a5028: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a5028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a502c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a502cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a5030: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a5030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a5034: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1A5034u;
    SET_GPR_U32(ctx, 31, 0x1A503Cu);
    ctx->pc = 0x1A5038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5034u;
    // 0x1a5038: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1A5034u, 0x1A503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A503Cu;
label_1a503c:
    // 0x1a503c: 0x8f839070  lw          $v1, -0x6F90($gp)
    ctx->pc = 0x1a503cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
    // 0x1a5040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5044: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1a5044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a5048: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1a5048u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a504c: 0x1012  mflo        $v0
    ctx->pc = 0x1a504cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a5050: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A5050u;
    {
        const bool branch_taken_0x1a5050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5050) {
            ctx->pc = 0x1A5054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5050u;
            // 0x1a5054: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5058u;
            goto label_1a5058;
        }
    }
    ctx->pc = 0x1A5058u;
label_1a5058:
    // 0x1a5058: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x1a5058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1a505c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A505Cu;
    {
        const bool branch_taken_0x1a505c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a505c) {
            ctx->pc = 0x1A5060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A505Cu;
            // 0x1a5060: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5064u;
            goto label_1a5064;
        }
    }
    ctx->pc = 0x1A5064u;
label_1a5064:
    // 0x1a5064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5068: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a5068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a506c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1a506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a5070: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1a5070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1a5074: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5074u;
        // 0x1a5078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A507Cu;
}
