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

// Function: Cmd_ROUND_Entry__FP15BsSCDEntControl
// Address: 0x1a6688 - 0x1a672c
void Cmd_ROUND_Entry__FP15BsSCDEntControl_0x1a6688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ROUND_Entry__FP15BsSCDEntControl_0x1a6688");
#endif

    switch (ctx->pc) {
        case 0x1a66b8u: goto label_1a66b8;
        case 0x1a66ecu: goto label_1a66ec;
        default: break;
    }

    ctx->pc = 0x1a6688u;

    // 0x1a6688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a668c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a668cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6694: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6698: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a669c: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a669cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a66a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a66a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a66a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a66a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a66a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a66ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a66acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a66b0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A66B0u;
    SET_GPR_U32(ctx, 31, 0x1A66B8u);
    ctx->pc = 0x1A66B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66B0u;
    // 0x1a66b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A66B0u, 0x1A66B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66B8u;
label_1a66b8:
    // 0x1a66b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a66b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a66bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a66bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a66c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a66c4: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a66c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a66c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a66c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a66cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a66ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a66d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a66d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a66d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a66d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a66d8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a66d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a66dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A66DCu;
    {
        const bool branch_taken_0x1a66dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66DCu;
        // 0x1a66e0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66dc) {
            ctx->pc = 0x1A66F0u;
            goto label_1a66f0;
        }
    }
    ctx->pc = 0x1A66E4u;
    // 0x1a66e4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A66E4u;
    SET_GPR_U32(ctx, 31, 0x1A66ECu);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A66E4u, 0x1A66ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66ECu;
label_1a66ec:
    // 0x1a66ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a66ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a66f0:
    // 0x1a66f0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1a66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a66f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a66f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a66f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a66f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a66fc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A66FCu;
    {
        const bool branch_taken_0x1a66fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A6700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66FCu;
        // 0x1a6700: 0x30a27fff  andi        $v0, $a1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66fc) {
            ctx->pc = 0x1A6710u;
            goto label_1a6710;
        }
    }
    ctx->pc = 0x1A6704u;
    // 0x1a6704: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x1a6704u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1a6708: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x1a6708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x1a670c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1a670cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1a6710:
    // 0x1a6710: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a6710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a6714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a671c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a671cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6720: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a6720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6724: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6724u;
        // 0x1a6728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A672Cu;
}
