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

// Function: entry_00109770
// Address: 0x109770 - 0x1097d8
void entry_00109770_0x109770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109770_0x109770");
#endif

    switch (ctx->pc) {
        case 0x10977cu: goto label_10977c;
        case 0x10978cu: goto label_10978c;
        case 0x1097a8u: goto label_1097a8;
        case 0x1097ccu: goto label_1097cc;
        default: break;
    }

    ctx->pc = 0x109770u;

label_109770:
    // 0x109770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109774:
    // 0x109774: 0xc0640d6  jal         func_190358
label_109778:
    if (ctx->pc == 0x109778u) {
        ctx->pc = 0x109778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109774u;
        // 0x109778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10977Cu;
        goto label_10977c;
    }
    ctx->pc = 0x109774u;
    SET_GPR_U32(ctx, 31, 0x10977Cu);
    ctx->pc = 0x109778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109774u;
    // 0x109778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190358u, 0x109774u, 0x10977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10977Cu;
label_10977c:
    // 0x10977c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10977cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_109780:
    // 0x109780: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x109780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_109784:
    // 0x109784: 0xc040ce8  jal         func_1033A0
label_109788:
    if (ctx->pc == 0x109788u) {
        ctx->pc = 0x109788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109784u;
        // 0x109788: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10978Cu;
        goto label_10978c;
    }
    ctx->pc = 0x109784u;
    SET_GPR_U32(ctx, 31, 0x10978Cu);
    ctx->pc = 0x109788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109784u;
    // 0x109788: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x109784u, 0x10978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10978Cu;
label_10978c:
    // 0x10978c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_109790:
    // 0x109790: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109794:
    // 0x109794: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x109794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_109798:
    // 0x109798: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x109798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10979c:
    // 0x10979c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x10979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1097a0:
    // 0x1097a0: 0x60f809  jalr        $v1
label_1097a4:
    if (ctx->pc == 0x1097A4u) {
        ctx->pc = 0x1097A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A0u;
        // 0x1097a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097A8u;
        goto label_1097a8;
    }
    ctx->pc = 0x1097A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1097A8u);
        ctx->pc = 0x1097A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A0u;
        // 0x1097a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1097A0u, 0x1097A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1097A8u;
label_1097a8:
    // 0x1097a8: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_1097ac:
    if (ctx->pc == 0x1097ACu) {
        ctx->pc = 0x1097ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A8u;
        // 0x1097ac: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097B0u;
        goto label_1097b0;
    }
    ctx->pc = 0x1097A8u;
    {
        const bool branch_taken_0x1097a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1097ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097A8u;
        // 0x1097ac: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097a8) {
            ctx->pc = 0x1097D8u;
            return;
        }
    }
    ctx->pc = 0x1097B0u;
label_1097b0:
    // 0x1097b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1097b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1097b4:
    // 0x1097b4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1097b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1097b8:
    // 0x1097b8: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x1097b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_1097bc:
    // 0x1097bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1097bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1097c0:
    // 0x1097c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1097c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1097c4:
    // 0x1097c4: 0x60f809  jalr        $v1
label_1097c8:
    if (ctx->pc == 0x1097C8u) {
        ctx->pc = 0x1097C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097C4u;
        // 0x1097c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097CCu;
        goto label_1097cc;
    }
    ctx->pc = 0x1097C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1097CCu);
        ctx->pc = 0x1097C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097C4u;
        // 0x1097c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1097C4u, 0x1097CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1097CCu;
label_1097cc:
    // 0x1097cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1097d0:
    if (ctx->pc == 0x1097D0u) {
        ctx->pc = 0x1097D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097CCu;
        // 0x1097d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1097D4u;
        goto label_1097d4;
    }
    ctx->pc = 0x1097CCu;
    {
        const bool branch_taken_0x1097cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1097D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097CCu;
        // 0x1097d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1097cc) {
            ctx->pc = 0x109800u;
            return;
        }
    }
    ctx->pc = 0x1097D4u;
label_1097d4:
    // 0x1097d4: 0x0  nop
    ctx->pc = 0x1097d4u;
    // NOP
    ctx->pc = 0x1097d8u;
}
