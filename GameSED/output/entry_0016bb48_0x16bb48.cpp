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

// Function: entry_0016bb48
// Address: 0x16bb48 - 0x16bb5c
void entry_0016bb48_0x16bb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bb48_0x16bb48");
#endif

    ctx->pc = 0x16bb48u;

    // 0x16bb48: 0x9622015a  lhu         $v0, 0x15A($s1)
    ctx->pc = 0x16bb48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x16bb4c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16bb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16bb50: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x16bb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16bb54: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x16BB54u;
    {
        const bool branch_taken_0x16bb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB54u;
        // 0x16bb58: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb54) {
            ctx->pc = 0x16BA60u;
            return;
        }
    }
    ctx->pc = 0x16BB5Cu;
}
