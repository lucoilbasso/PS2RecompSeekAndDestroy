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

// Function: caseD_21
// Address: 0x135d78 - 0x135db8
void caseD_21_0x135d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_21_0x135d78");
#endif

    switch (ctx->pc) {
        case 0x135d80u: goto label_135d80;
        default: break;
    }

    ctx->pc = 0x135d78u;

    // 0x135d78: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135D78u;
    SET_GPR_U32(ctx, 31, 0x135D80u);
    ctx->pc = 0x135D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D78u;
    // 0x135d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135D78u, 0x135D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D80u;
label_135d80:
    // 0x135d80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135d88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135d90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135d94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135d98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135d98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135d9c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135d9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135da0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135da0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135da4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135da8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135dac: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135db0: 0x80507d0  j           func_141F40
    ctx->pc = 0x135DB0u;
    ctx->pc = 0x135DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135DB0u;
    // 0x135db4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141F40u;
    ApCameraChangeAngleLRLock__FP7WcActori_0x141f40(rdram, ctx, runtime); return;
    ctx->pc = 0x135DB8u;
}
