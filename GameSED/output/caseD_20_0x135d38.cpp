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

// Function: caseD_20
// Address: 0x135d38 - 0x135d78
void caseD_20_0x135d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_20_0x135d38");
#endif

    switch (ctx->pc) {
        case 0x135d40u: goto label_135d40;
        default: break;
    }

    ctx->pc = 0x135d38u;

    // 0x135d38: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135D38u;
    SET_GPR_U32(ctx, 31, 0x135D40u);
    ctx->pc = 0x135D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D38u;
    // 0x135d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135D38u, 0x135D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D40u;
label_135d40:
    // 0x135d40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135d48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135d4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135d50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135d50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135d54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135d54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135d58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135d58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135d5c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135d5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135d60: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135d60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135d64: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135d68: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135d6c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135d70: 0x80507b4  j           func_141ED0
    ctx->pc = 0x135D70u;
    ctx->pc = 0x135D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D70u;
    // 0x135d74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141ED0u;
    ApCameraChangeAngleRotZ__FP7WcActori_0x141ed0(rdram, ctx, runtime); return;
    ctx->pc = 0x135D78u;
}
