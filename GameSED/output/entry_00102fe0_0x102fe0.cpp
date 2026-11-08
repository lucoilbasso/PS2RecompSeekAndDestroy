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

// Function: entry_00102fe0
// Address: 0x102fe0 - 0x103030
void entry_00102fe0_0x102fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102fe0_0x102fe0");
#endif

    switch (ctx->pc) {
        case 0x102fe8u: goto label_102fe8;
        case 0x102ff4u: goto label_102ff4;
        default: break;
    }

    ctx->pc = 0x102fe0u;

    // 0x102fe0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x102FE0u;
    SET_GPR_U32(ctx, 31, 0x102FE8u);
    ctx->pc = 0x102FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102FE0u;
    // 0x102fe4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x102FE0u, 0x102FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FE8u;
label_102fe8:
    // 0x102fe8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x102fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102fec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x102FECu;
    SET_GPR_U32(ctx, 31, 0x102FF4u);
    ctx->pc = 0x102FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102FECu;
    // 0x102ff0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x102FECu, 0x102FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102FF4u;
label_102ff4:
    // 0x102ff4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x102ff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ff8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x102FF8u;
    {
        const bool branch_taken_0x102ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x102FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FF8u;
        // 0x102ffc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ff8) {
            ctx->pc = 0x103030u;
            return;
        }
    }
    ctx->pc = 0x103000u;
    // 0x103000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x103000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103004: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x103008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10300c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10300cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x103014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103018: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10301c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10301cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103020: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x103020u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x103024: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x103024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103028: 0x8040b62  j           func_102D88
    ctx->pc = 0x103028u;
    ctx->pc = 0x10302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103028u;
    // 0x10302c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102D88u;
    PartsLoadDestroy__9ApcObjRscib_0x102d88(rdram, ctx, runtime); return;
    ctx->pc = 0x103030u;
}
