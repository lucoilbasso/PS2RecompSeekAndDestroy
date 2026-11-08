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

// Function: entry_00191b1c
// Address: 0x191b1c - 0x191b8c
void entry_00191b1c_0x191b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191b1c_0x191b1c");
#endif

    ctx->pc = 0x191b1cu;

    // 0x191b1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x191b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x191b20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x191b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x191b24: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x191b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x191b28: 0x96230150  lhu         $v1, 0x150($s1)
    ctx->pc = 0x191b28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x191b2c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x191b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x191b30: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x191B30u;
    {
        const bool branch_taken_0x191b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B30u;
        // 0x191b34: 0x8cb2015c  lw          $s2, 0x15C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b30) {
            ctx->pc = 0x191CA0u;
            return;
        }
    }
    ctx->pc = 0x191B38u;
    // 0x191b38: 0x8e2201d0  lw          $v0, 0x1D0($s1)
    ctx->pc = 0x191b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x191b3c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x191b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x191b40: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x191B40u;
    {
        const bool branch_taken_0x191b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B40u;
        // 0x191b44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b40) {
            ctx->pc = 0x191CA4u;
            return;
        }
    }
    ctx->pc = 0x191B48u;
    // 0x191b48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x191b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x191b4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x191b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x191b50: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x191B50u;
    {
        const bool branch_taken_0x191b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191b50) {
            ctx->pc = 0x191B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191B50u;
            // 0x191b54: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191CA8u;
            return;
        }
    }
    ctx->pc = 0x191B58u;
    // 0x191b58: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x191b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x191b5c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x191b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x191b60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x191b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x191b64: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x191B64u;
    {
        const bool branch_taken_0x191b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B64u;
        // 0x191b68: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b64) {
            ctx->pc = 0x191C90u;
            return;
        }
    }
    ctx->pc = 0x191B6Cu;
    // 0x191b6c: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x191B6Cu;
    {
        const bool branch_taken_0x191b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191b6c) {
            ctx->pc = 0x191B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191B6Cu;
            // 0x191b70: 0x26430034  addiu       $v1, $s2, 0x34 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191C94u;
            return;
        }
    }
    ctx->pc = 0x191B74u;
    // 0x191b74: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x191b74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x191b78: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x191b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x191b7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191B7Cu;
    {
        const bool branch_taken_0x191b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191b7c) {
            ctx->pc = 0x191B8Cu;
            return;
        }
    }
    ctx->pc = 0x191B84u;
    // 0x191b84: 0xc061920  jal         func_186480
    ctx->pc = 0x191B84u;
    SET_GPR_U32(ctx, 31, 0x191B8Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x191B84u, 0x191B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B8Cu;
}
