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

// Function: entry_00101960
// Address: 0x101960 - 0x101974
void entry_00101960_0x101960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101960_0x101960");
#endif

    ctx->pc = 0x101960u;

    // 0x101960: 0x9643001a  lhu         $v1, 0x1A($s2)
    ctx->pc = 0x101960u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x101964: 0x651004  sllv        $v0, $a1, $v1
    ctx->pc = 0x101964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x101968: 0x11020002  beq         $t0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x101968u;
    {
        const bool branch_taken_0x101968 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x10196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101968u;
        // 0x10196c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101968) {
            ctx->pc = 0x101974u;
            return;
        }
    }
    ctx->pc = 0x101970u;
    // 0x101970: 0xa642001a  sh          $v0, 0x1A($s2)
    ctx->pc = 0x101970u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x101974u;
}
