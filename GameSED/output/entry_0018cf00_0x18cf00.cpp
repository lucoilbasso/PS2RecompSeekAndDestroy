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

// Function: entry_0018cf00
// Address: 0x18cf00 - 0x18cf50
void entry_0018cf00_0x18cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cf00_0x18cf00");
#endif

    ctx->pc = 0x18cf00u;

    // 0x18cf00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x18cf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x18cf04: 0x86020244  lh          $v0, 0x244($s0)
    ctx->pc = 0x18cf04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x18cf08: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x18cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x18cf0c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x18cf0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18cf10: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18CF10u;
    {
        const bool branch_taken_0x18cf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF10u;
        // 0x18cf14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf10) {
            ctx->pc = 0x18CF80u;
            return;
        }
    }
    ctx->pc = 0x18CF18u;
    // 0x18cf18: 0x8602023c  lh          $v0, 0x23C($s0)
    ctx->pc = 0x18cf18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x18cf1c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x18CF1Cu;
    {
        const bool branch_taken_0x18cf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF1Cu;
        // 0x18cf20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf1c) {
            ctx->pc = 0x18CF80u;
            return;
        }
    }
    ctx->pc = 0x18CF24u;
    // 0x18cf24: 0x96050246  lhu         $a1, 0x246($s0)
    ctx->pc = 0x18cf24u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
    // 0x18cf28: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x18cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18cf2c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x18cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18cf30: 0xa6000244  sh          $zero, 0x244($s0)
    ctx->pc = 0x18cf30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x18cf34: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x18cf34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x18cf38: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x18cf38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x18cf3c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x18cf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18cf40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CF40u;
    {
        const bool branch_taken_0x18cf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF40u;
        // 0x18cf44: 0xa6030246  sh          $v1, 0x246($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 582), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf40) {
            ctx->pc = 0x18CF50u;
            return;
        }
    }
    ctx->pc = 0x18CF48u;
    // 0x18cf48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18CF48u;
    {
        const bool branch_taken_0x18cf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF48u;
        // 0x18cf4c: 0xa6050246  sh          $a1, 0x246($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 582), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf48) {
            ctx->pc = 0x18CF60u;
            return;
        }
    }
    ctx->pc = 0x18CF50u;
}
