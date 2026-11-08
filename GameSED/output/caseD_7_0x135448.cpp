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

// Function: caseD_7
// Address: 0x135448 - 0x1354a0
void caseD_7_0x135448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x135448");
#endif

    switch (ctx->pc) {
        case 0x135450u: goto label_135450;
        default: break;
    }

    ctx->pc = 0x135448u;

    // 0x135448: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135448u;
    SET_GPR_U32(ctx, 31, 0x135450u);
    ctx->pc = 0x13544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135448u;
    // 0x13544c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135448u, 0x135450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135450u;
label_135450:
    // 0x135450: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x135450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135454: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x135454u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x135458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13545c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x13545cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135468: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x135468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x13546c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13546cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135470: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135470u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135474: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x135474u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x135478: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13547c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13547cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135480: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135480u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135484: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135484u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135488: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13548c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x13548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135490: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135494: 0x8050978  j           func_1425E0
    ctx->pc = 0x135494u;
    ctx->pc = 0x135498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135494u;
    // 0x135498: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1425E0u;
    ApCMTraceSetRollOffset__FP7WcActorib_0x1425e0(rdram, ctx, runtime); return;
    ctx->pc = 0x13549Cu;
    // 0x13549c: 0x0  nop
    ctx->pc = 0x13549cu;
    // NOP
    ctx->pc = 0x1354a0u;
}
