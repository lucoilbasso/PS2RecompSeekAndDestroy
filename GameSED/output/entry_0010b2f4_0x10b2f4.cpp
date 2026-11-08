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

// Function: entry_0010b2f4
// Address: 0x10b2f4 - 0x10b368
void entry_0010b2f4_0x10b2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b2f4_0x10b2f4");
#endif

    switch (ctx->pc) {
        case 0x10b300u: goto label_10b300;
        case 0x10b328u: goto label_10b328;
        case 0x10b33cu: goto label_10b33c;
        default: break;
    }

    ctx->pc = 0x10b2f4u;

    // 0x10b2f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10b2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2f8: 0xc041862  jal         func_106188
    ctx->pc = 0x10B2F8u;
    SET_GPR_U32(ctx, 31, 0x10B300u);
    ctx->pc = 0x10B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B2F8u;
    // 0x10b2fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106188u, 0x10B2F8u, 0x10B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B300u;
label_10b300:
    // 0x10b300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b304: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b308: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x10b308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x10b30c: 0x2453f4d0  addiu       $s3, $v0, -0xB30
    ctx->pc = 0x10b30cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964432));
    // 0x10b310: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b318: 0x10740013  beq         $v1, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x10B318u;
    {
        const bool branch_taken_0x10b318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x10B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B318u;
        // 0x10b31c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b318) {
            ctx->pc = 0x10B368u;
            return;
        }
    }
    ctx->pc = 0x10B320u;
    // 0x10b320: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x10B320u;
    SET_GPR_U32(ctx, 31, 0x10B328u);
    ctx->pc = 0x10B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B320u;
    // 0x10b324: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x10B320u, 0x10B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B328u;
label_10b328:
    // 0x10b328: 0x2610f2d0  addiu       $s0, $s0, -0xD30
    ctx->pc = 0x10b328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963920));
    // 0x10b32c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10b32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b334: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x10B334u;
    SET_GPR_U32(ctx, 31, 0x10B33Cu);
    ctx->pc = 0x10B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B334u;
    // 0x10b338: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x10B334u, 0x10B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B33Cu;
label_10b33c:
    // 0x10b33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b34c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10b34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b350: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10b350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b354: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10b354u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b358: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10b358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10b35c: 0x8063b2e  j           func_18ECB8
    ctx->pc = 0x10B35Cu;
    ctx->pc = 0x10B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B35Cu;
    // 0x10b360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    WTxPanelPrint__FP9WcTxPanelPc_0x18ecb8(rdram, ctx, runtime); return;
    ctx->pc = 0x10B364u;
    // 0x10b364: 0x0  nop
    ctx->pc = 0x10b364u;
    // NOP
    ctx->pc = 0x10b368u;
}
