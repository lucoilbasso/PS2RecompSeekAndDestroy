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

// Function: entry_0014a260
// Address: 0x14a260 - 0x14a280
void entry_0014a260_0x14a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a260_0x14a260");
#endif

    ctx->pc = 0x14a260u;

    // 0x14a260: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14a260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a264: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a268: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a26c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x14A26Cu;
    {
        const bool branch_taken_0x14a26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a26c) {
            ctx->pc = 0x14A270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A26Cu;
            // 0x14a270: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A2C0u;
            return;
        }
    }
    ctx->pc = 0x14A274u;
    // 0x14a274: 0x25020040  addiu       $v0, $t0, 0x40
    ctx->pc = 0x14a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x14a278: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x14a278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x14a27c: 0x2c490080  sltiu       $t1, $v0, 0x80
    ctx->pc = 0x14a27cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    ctx->pc = 0x14a280u;
}
