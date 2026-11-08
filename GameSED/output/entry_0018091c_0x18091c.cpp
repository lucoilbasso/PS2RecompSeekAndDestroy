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

// Function: entry_0018091c
// Address: 0x18091c - 0x180930
void entry_0018091c_0x18091c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018091c_0x18091c");
#endif

    ctx->pc = 0x18091cu;

    // 0x18091c: 0x97020002  lhu         $v0, 0x2($t8)
    ctx->pc = 0x18091cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x180920: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x180920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x180924: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x180924u;
    {
        const bool branch_taken_0x180924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180924u;
        // 0x180928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180924) {
            ctx->pc = 0x180BECu;
            return;
        }
    }
    ctx->pc = 0x18092Cu;
    // 0x18092c: 0x0  nop
    ctx->pc = 0x18092cu;
    // NOP
    ctx->pc = 0x180930u;
}
