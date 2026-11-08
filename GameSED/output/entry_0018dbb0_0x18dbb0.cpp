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

// Function: entry_0018dbb0
// Address: 0x18dbb0 - 0x18dbd8
void entry_0018dbb0_0x18dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dbb0_0x18dbb0");
#endif

    ctx->pc = 0x18dbb0u;

    // 0x18dbb0: 0x86230244  lh          $v1, 0x244($s1)
    ctx->pc = 0x18dbb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x18dbb4: 0x86220248  lh          $v0, 0x248($s1)
    ctx->pc = 0x18dbb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x18dbb8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x18dbb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18dbbc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18DBBCu;
    {
        const bool branch_taken_0x18dbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBBCu;
        // 0x18dbc0: 0x96240244  lhu         $a0, 0x244($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbbc) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18DBC4u;
    // 0x18dbc4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x18dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18dbc8: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x18dbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x18dbcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18DBCCu;
    {
        const bool branch_taken_0x18dbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBCCu;
        // 0x18dbd0: 0xa6220244  sh          $v0, 0x244($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 580), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbcc) {
            ctx->pc = 0x18DBE4u;
            return;
        }
    }
    ctx->pc = 0x18DBD4u;
    // 0x18dbd4: 0x0  nop
    ctx->pc = 0x18dbd4u;
    // NOP
    ctx->pc = 0x18dbd8u;
}
