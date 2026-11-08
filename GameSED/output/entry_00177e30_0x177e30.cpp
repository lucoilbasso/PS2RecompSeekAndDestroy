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

// Function: entry_00177e30
// Address: 0x177e30 - 0x177e40
void entry_00177e30_0x177e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177e30_0x177e30");
#endif

    ctx->pc = 0x177e30u;

    // 0x177e30: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x177e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x177e34: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x177E34u;
    {
        const bool branch_taken_0x177e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x177e34) {
            ctx->pc = 0x177E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177E34u;
            // 0x177e38: 0xa4e0000e  sh          $zero, 0xE($a3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177E40u;
            return;
        }
    }
    ctx->pc = 0x177E3Cu;
    // 0x177e3c: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x177e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x177e40u;
}
