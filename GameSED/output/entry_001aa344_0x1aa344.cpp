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

// Function: entry_001aa344
// Address: 0x1aa344 - 0x1aa3b0
void entry_001aa344_0x1aa344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa344_0x1aa344");
#endif

    switch (ctx->pc) {
        case 0x1aa34cu: goto label_1aa34c;
        case 0x1aa384u: goto label_1aa384;
        case 0x1aa39cu: goto label_1aa39c;
        case 0x1aa3a8u: goto label_1aa3a8;
        default: break;
    }

    ctx->pc = 0x1aa344u;

    // 0x1aa344: 0xc06a91a  jal         func_1AA468
    ctx->pc = 0x1AA344u;
    SET_GPR_U32(ctx, 31, 0x1AA34Cu);
    ctx->pc = 0x1AA468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA468u, 0x1AA344u, 0x1AA34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA34Cu;
label_1aa34c:
    // 0x1aa34c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1aa34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1aa350: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1aa350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1aa354: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1aa354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1aa358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa35c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1aa35cu;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x1aa360: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x1aa360u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x1aa364: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x1aa364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1aa368: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1aa368u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1aa36c: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x1aa36cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x1aa370: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1aa370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x1aa374: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aa374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aa378: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1aa378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1aa37c: 0xc06bde8  jal         func_1AF7A0
    ctx->pc = 0x1AA37Cu;
    SET_GPR_U32(ctx, 31, 0x1AA384u);
    ctx->pc = 0x1AA380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA37Cu;
    // 0x1aa380: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF7A0u, 0x1AA37Cu, 0x1AA384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA384u;
label_1aa384:
    // 0x1aa384: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x1aa384u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1aa388: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1aa388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1aa38c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA38Cu;
    {
        const bool branch_taken_0x1aa38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA38Cu;
        // 0x1aa390: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa38c) {
            ctx->pc = 0x1AA3B0u;
            return;
        }
    }
    ctx->pc = 0x1AA394u;
    // 0x1aa394: 0xc06bfd0  jal         func_1AFF40
    ctx->pc = 0x1AA394u;
    SET_GPR_U32(ctx, 31, 0x1AA39Cu);
    ctx->pc = 0x1AA398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA394u;
    // 0x1aa398: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF40u, 0x1AA394u, 0x1AA39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA39Cu;
label_1aa39c:
    // 0x1aa39c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1aa39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1aa3a0: 0xc06bc58  jal         func_1AF160
    ctx->pc = 0x1AA3A0u;
    SET_GPR_U32(ctx, 31, 0x1AA3A8u);
    ctx->pc = 0x1AA3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3A0u;
    // 0x1aa3a4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF160u, 0x1AA3A0u, 0x1AA3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3A8u;
label_1aa3a8:
    // 0x1aa3a8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1aa3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1aa3ac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1aa3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1aa3b0u;
}
