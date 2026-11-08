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

// Function: entry_00175570
// Address: 0x175570 - 0x175580
void entry_00175570_0x175570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175570_0x175570");
#endif

    ctx->pc = 0x175570u;

    // 0x175570: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x175570u;
    {
        const bool branch_taken_0x175570 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x175574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175570u;
        // 0x175574: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175570) {
            ctx->pc = 0x1755D4u;
            return;
        }
    }
    ctx->pc = 0x175578u;
    // 0x175578: 0x2674ffff  addiu       $s4, $s3, -0x1
    ctx->pc = 0x175578u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x17557c: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x17557cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x175580u;
}
