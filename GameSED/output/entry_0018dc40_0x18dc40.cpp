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

// Function: entry_0018dc40
// Address: 0x18dc40 - 0x18dc98
void entry_0018dc40_0x18dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dc40_0x18dc40");
#endif

    ctx->pc = 0x18dc40u;

    // 0x18dc40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18dc44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18dc48: 0x86020244  lh          $v0, 0x244($s0)
    ctx->pc = 0x18dc48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x18dc4c: 0x8e030208  lw          $v1, 0x208($s0)
    ctx->pc = 0x18dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x18dc50: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x18dc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18dc54: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x18DC54u;
    {
        const bool branch_taken_0x18dc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC54u;
        // 0x18dc58: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc54) {
            ctx->pc = 0x18DCC8u;
            return;
        }
    }
    ctx->pc = 0x18DC5Cu;
    // 0x18dc5c: 0x8602023c  lh          $v0, 0x23C($s0)
    ctx->pc = 0x18dc5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x18dc60: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18DC60u;
    {
        const bool branch_taken_0x18dc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC60u;
        // 0x18dc64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc60) {
            ctx->pc = 0x18DCC8u;
            return;
        }
    }
    ctx->pc = 0x18DC68u;
    // 0x18dc68: 0x96050246  lhu         $a1, 0x246($s0)
    ctx->pc = 0x18dc68u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 582)));
    // 0x18dc6c: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x18dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18dc70: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x18dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18dc74: 0xa6000244  sh          $zero, 0x244($s0)
    ctx->pc = 0x18dc74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x18dc78: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x18dc78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x18dc7c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x18dc7cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x18dc80: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x18dc80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18dc84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18DC84u;
    {
        const bool branch_taken_0x18dc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC84u;
        // 0x18dc88: 0xa6030246  sh          $v1, 0x246($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 582), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc84) {
            ctx->pc = 0x18DC98u;
            return;
        }
    }
    ctx->pc = 0x18DC8Cu;
    // 0x18dc8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18DC8Cu;
    {
        const bool branch_taken_0x18dc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DC8Cu;
        // 0x18dc90: 0xa6050246  sh          $a1, 0x246($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 582), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dc8c) {
            ctx->pc = 0x18DCA8u;
            return;
        }
    }
    ctx->pc = 0x18DC94u;
    // 0x18dc94: 0x0  nop
    ctx->pc = 0x18dc94u;
    // NOP
    ctx->pc = 0x18dc98u;
}
