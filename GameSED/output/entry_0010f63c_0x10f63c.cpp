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

// Function: entry_0010f63c
// Address: 0x10f63c - 0x10f688
void entry_0010f63c_0x10f63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f63c_0x10f63c");
#endif

    switch (ctx->pc) {
        case 0x10f654u: goto label_10f654;
        default: break;
    }

    ctx->pc = 0x10f63cu;

    // 0x10f63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f640: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10f640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10f644: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10f648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10f648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10f64c: 0xc05be74  jal         func_16F9D0
    ctx->pc = 0x10F64Cu;
    SET_GPR_U32(ctx, 31, 0x10F654u);
    ctx->pc = 0x10F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F64Cu;
    // 0x10f650: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x10F64Cu, 0x10F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F654u;
label_10f654:
    // 0x10f654: 0x8f829118  lw          $v0, -0x6EE8($gp)
    ctx->pc = 0x10f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
    // 0x10f658: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10F658u;
    {
        const bool branch_taken_0x10f658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f658) {
            ctx->pc = 0x10F65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F658u;
            // 0x10f65c: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F688u;
            return;
        }
    }
    ctx->pc = 0x10F660u;
    // 0x10f660: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x10f660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x10f664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f66c: 0x2484d160  addiu       $a0, $a0, -0x2EA0
    ctx->pc = 0x10f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955360));
    // 0x10f670: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10f670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f674: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10f674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f678: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10f678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f67c: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x10f67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10f680: 0x805bca8  j           func_16F2A0
    ctx->pc = 0x10F680u;
    ctx->pc = 0x10F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F680u;
    // 0x10f684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    ApDebugPrint__FPce_0x16f2a0(rdram, ctx, runtime); return;
    ctx->pc = 0x10F688u;
}
