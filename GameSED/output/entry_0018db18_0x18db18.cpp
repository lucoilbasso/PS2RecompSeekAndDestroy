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

// Function: entry_0018db18
// Address: 0x18db18 - 0x18db68
void entry_0018db18_0x18db18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018db18_0x18db18");
#endif

    ctx->pc = 0x18db18u;

    // 0x18db18: 0x8623023c  lh          $v1, 0x23C($s1)
    ctx->pc = 0x18db18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x18db1c: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x18DB1Cu;
    {
        const bool branch_taken_0x18db1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB1Cu;
        // 0x18db20: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db1c) {
            ctx->pc = 0x18DBF4u;
            return;
        }
    }
    ctx->pc = 0x18DB24u;
    // 0x18db24: 0x86220244  lh          $v0, 0x244($s1)
    ctx->pc = 0x18db24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x18db28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18db28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db2c: 0x8e230208  lw          $v1, 0x208($s1)
    ctx->pc = 0x18db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x18db30: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x18db30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18db34: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18DB34u;
    {
        const bool branch_taken_0x18db34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB34u;
        // 0x18db38: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db34) {
            ctx->pc = 0x18DBA4u;
            return;
        }
    }
    ctx->pc = 0x18DB3Cu;
    // 0x18db3c: 0x96250246  lhu         $a1, 0x246($s1)
    ctx->pc = 0x18db3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x18db40: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x18db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x18db44: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x18db44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18db48: 0xa6200244  sh          $zero, 0x244($s1)
    ctx->pc = 0x18db48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 0));
    // 0x18db4c: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x18db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x18db50: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x18db50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x18db54: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x18db54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18db58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DB58u;
    {
        const bool branch_taken_0x18db58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB58u;
        // 0x18db5c: 0xa6230246  sh          $v1, 0x246($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db58) {
            ctx->pc = 0x18DB68u;
            return;
        }
    }
    ctx->pc = 0x18DB60u;
    // 0x18db60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18DB60u;
    {
        const bool branch_taken_0x18db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DB60u;
        // 0x18db64: 0xa6250246  sh          $a1, 0x246($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 582), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db60) {
            ctx->pc = 0x18DB78u;
            return;
        }
    }
    ctx->pc = 0x18DB68u;
}
