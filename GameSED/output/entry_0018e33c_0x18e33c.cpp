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

// Function: entry_0018e33c
// Address: 0x18e33c - 0x18e374
void entry_0018e33c_0x18e33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e33c_0x18e33c");
#endif

    switch (ctx->pc) {
        case 0x18e344u: goto label_18e344;
        default: break;
    }

    ctx->pc = 0x18e33cu;

    // 0x18e33c: 0xc05f122  jal         func_17C488
    ctx->pc = 0x18E33Cu;
    SET_GPR_U32(ctx, 31, 0x18E344u);
    ctx->pc = 0x18E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E33Cu;
    // 0x18e340: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C488u, 0x18E33Cu, 0x18E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E344u;
label_18e344:
    // 0x18e344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18e348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18e34c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18e34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e350: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18e350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18e354: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18e354u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e358: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18e358u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18e35c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x18e35cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e360: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x18e360u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18e364: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x18e364u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e368: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x18e368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x18e36c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E36Cu;
        // 0x18e370: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E374u;
}
