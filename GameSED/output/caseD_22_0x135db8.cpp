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

// Function: caseD_22
// Address: 0x135db8 - 0x135df8
void caseD_22_0x135db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_22_0x135db8");
#endif

    switch (ctx->pc) {
        case 0x135dc0u: goto label_135dc0;
        default: break;
    }

    ctx->pc = 0x135db8u;

    // 0x135db8: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135DB8u;
    SET_GPR_U32(ctx, 31, 0x135DC0u);
    ctx->pc = 0x135DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135DB8u;
    // 0x135dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135DB8u, 0x135DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135DC0u;
label_135dc0:
    // 0x135dc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135dc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135dd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135dd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135dd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135dd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135dd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135ddc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135ddcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135de0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135de0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135de4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135de8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135dec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135df0: 0x80507ec  j           func_141FB0
    ctx->pc = 0x135DF0u;
    ctx->pc = 0x135DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135DF0u;
    // 0x135df4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141FB0u;
    ApCameraChangeAngleUDLock__FP7WcActori_0x141fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x135DF8u;
}
