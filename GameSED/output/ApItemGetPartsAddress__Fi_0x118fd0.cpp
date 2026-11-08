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

// Function: ApItemGetPartsAddress__Fi
// Address: 0x118fd0 - 0x119048
void ApItemGetPartsAddress__Fi_0x118fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemGetPartsAddress__Fi_0x118fd0");
#endif

    switch (ctx->pc) {
        case 0x119004u: goto label_119004;
        case 0x119024u: goto label_119024;
        default: break;
    }

    ctx->pc = 0x118fd0u;

    // 0x118fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118fd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x118fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fe0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118fe4: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x118fe4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x118fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118fec: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118FECu;
    {
        const bool branch_taken_0x118fec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x118FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FECu;
        // 0x118ff0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118fec) {
            ctx->pc = 0x119004u;
            goto label_119004;
        }
    }
    ctx->pc = 0x118FF4u;
    // 0x118ff4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x118ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x118ff8: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x118ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x118ffc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x118FFCu;
    SET_GPR_U32(ctx, 31, 0x119004u);
    ctx->pc = 0x119000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FFCu;
    // 0x119000: 0x24a54390  addiu       $a1, $a1, 0x4390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x118FFCu, 0x119004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119004u;
label_119004:
    // 0x119004: 0x108203  sra         $s0, $s0, 8
    ctx->pc = 0x119004u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 8));
    // 0x119008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11900c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x11900cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x119010: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x119010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x119014: 0x2421c0c0  addiu       $at, $at, -0x3F40
    ctx->pc = 0x119014u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294951104));
    // 0x119018: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x119018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x11901c: 0xc041882  jal         func_106208
    ctx->pc = 0x11901Cu;
    SET_GPR_U32(ctx, 31, 0x119024u);
    ctx->pc = 0x119020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11901Cu;
    // 0x119020: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x11901Cu, 0x119024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119024u;
label_119024:
    // 0x119024: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x119024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x119028: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11902c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11902cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x119030: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x119030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11903c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11903cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119040: 0x8041882  j           func_106208
    ctx->pc = 0x119040u;
    ctx->pc = 0x119044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119040u;
    // 0x119044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    ApSCDEntInqMessageLibTocParam32__Fii_0x106208(rdram, ctx, runtime); return;
    ctx->pc = 0x119048u;
}
