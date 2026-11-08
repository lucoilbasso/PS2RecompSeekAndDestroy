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

// Function: Cmd_IMAGELIB_PAGE_Entry__FP15BsSCDEntControl
// Address: 0x145fa8 - 0x146028
void Cmd_IMAGELIB_PAGE_Entry__FP15BsSCDEntControl_0x145fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_IMAGELIB_PAGE_Entry__FP15BsSCDEntControl_0x145fa8");
#endif

    switch (ctx->pc) {
        case 0x145fbcu: goto label_145fbc;
        case 0x145fd0u: goto label_145fd0;
        default: break;
    }

    ctx->pc = 0x145fa8u;

    // 0x145fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145fb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x145fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x145fb4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x145FB4u;
    SET_GPR_U32(ctx, 31, 0x145FBCu);
    ctx->pc = 0x145FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FB4u;
    // 0x145fb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x145FB4u, 0x145FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FBCu;
label_145fbc:
    // 0x145fbc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x145fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x145fc0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x145fc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x145fc4: 0x22a03  sra         $a1, $v0, 8
    ctx->pc = 0x145fc4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 8));
    // 0x145fc8: 0xc051436  jal         func_1450D8
    ctx->pc = 0x145FC8u;
    SET_GPR_U32(ctx, 31, 0x145FD0u);
    ctx->pc = 0x145FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FC8u;
    // 0x145fcc: 0x8c640048  lw          $a0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1450D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450D8u, 0x145FC8u, 0x145FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FD0u;
label_145fd0:
    // 0x145fd0: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x145fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x145fd4: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x145fd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145fd8: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x145fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    // 0x145fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145fe0: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x145fe0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EB000u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x1EB000u, _value); } while (0);
    // 0x145fe4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x145fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145fe8: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x145fe8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x145fec: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x145fecu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EB008u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x1EB008u, _value); } while (0);
    // 0x145ff0: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x145ff0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x145ff4: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x145ff4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EB010u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x1EB010u, _value); } while (0);
    // 0x145ff8: 0xdc430018  ld          $v1, 0x18($v0)
    ctx->pc = 0x145ff8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x145ffc: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x145ffcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EB018u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x1EB018u, _value); } while (0);
    // 0x146000: 0xdc440020  ld          $a0, 0x20($v0)
    ctx->pc = 0x146000u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x146004: 0xfca40020  sd          $a0, 0x20($a1)
    ctx->pc = 0x146004u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EB020u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x1EB020u, _value); } while (0);
    // 0x146008: 0xdc430028  ld          $v1, 0x28($v0)
    ctx->pc = 0x146008u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x14600c: 0xfca30028  sd          $v1, 0x28($a1)
    ctx->pc = 0x14600cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EB028u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x1EB028u, _value); } while (0);
    // 0x146010: 0xdc440030  ld          $a0, 0x30($v0)
    ctx->pc = 0x146010u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x146014: 0xfca40030  sd          $a0, 0x30($a1)
    ctx->pc = 0x146014u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1EB030u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x1EB030u, _value); } while (0);
    // 0x146018: 0xdc430038  ld          $v1, 0x38($v0)
    ctx->pc = 0x146018u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x14601c: 0xfca30038  sd          $v1, 0x38($a1)
    ctx->pc = 0x14601cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1EB038u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x1EB038u, _value); } while (0);
    // 0x146020: 0x3e00008  jr          $ra
    ctx->pc = 0x146020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146020u;
        // 0x146024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146028u;
}
