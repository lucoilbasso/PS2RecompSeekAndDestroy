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

// Function: ApItemGetPartsModelNo__Fi
// Address: 0x1159b0 - 0x115a30
void ApItemGetPartsModelNo__Fi_0x1159b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemGetPartsModelNo__Fi_0x1159b0");
#endif

    switch (ctx->pc) {
        case 0x1159e4u: goto label_1159e4;
        case 0x115a04u: goto label_115a04;
        case 0x115a18u: goto label_115a18;
        default: break;
    }

    ctx->pc = 0x1159b0u;

    // 0x1159b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1159b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1159b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1159b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1159b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1159b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1159bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1159bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1159c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1159c4: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x1159c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1159c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1159c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1159cc: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1159CCu;
    {
        const bool branch_taken_0x1159cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1159D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159CCu;
        // 0x1159d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159cc) {
            ctx->pc = 0x1159E4u;
            goto label_1159e4;
        }
    }
    ctx->pc = 0x1159D4u;
    // 0x1159d4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1159d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1159d8: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x1159d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1159dc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1159DCu;
    SET_GPR_U32(ctx, 31, 0x1159E4u);
    ctx->pc = 0x1159E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1159DCu;
    // 0x1159e0: 0x24a54390  addiu       $a1, $a1, 0x4390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1159DCu, 0x1159E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159E4u;
label_1159e4:
    // 0x1159e4: 0x108203  sra         $s0, $s0, 8
    ctx->pc = 0x1159e4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 8));
    // 0x1159e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1159e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1159ec: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1159ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1159f0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1159f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1159f4: 0x2421c0c0  addiu       $at, $at, -0x3F40
    ctx->pc = 0x1159f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294951104));
    // 0x1159f8: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x1159f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1159fc: 0xc041882  jal         func_106208
    ctx->pc = 0x1159FCu;
    SET_GPR_U32(ctx, 31, 0x115A04u);
    ctx->pc = 0x115A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1159FCu;
    // 0x115a00: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1159FCu, 0x115A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A04u;
label_115a04:
    // 0x115a04: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x115a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x115a08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115a0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x115a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115a10: 0xc041882  jal         func_106208
    ctx->pc = 0x115A10u;
    SET_GPR_U32(ctx, 31, 0x115A18u);
    ctx->pc = 0x115A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A10u;
    // 0x115a14: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x115A10u, 0x115A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A18u;
label_115a18:
    // 0x115a18: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x115a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x115a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115a20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115a24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115a28: 0x3e00008  jr          $ra
    ctx->pc = 0x115A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A28u;
        // 0x115a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115A30u;
}
