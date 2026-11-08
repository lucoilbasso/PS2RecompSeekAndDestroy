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

// Function: entry_00188720
// Address: 0x188720 - 0x188748
void entry_00188720_0x188720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188720_0x188720");
#endif

    ctx->pc = 0x188720u;

    // 0x188720: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x188720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188724: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x188724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x188728: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x188728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x18872c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18872cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x188730: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x188730u;
    {
        const bool branch_taken_0x188730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188730) {
            ctx->pc = 0x188734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188730u;
            // 0x188734: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1887ACu;
            return;
        }
    }
    ctx->pc = 0x188738u;
    // 0x188738: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x18873c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18873Cu;
    {
        const bool branch_taken_0x18873c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x188740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18873Cu;
        // 0x188740: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18873c) {
            ctx->pc = 0x188784u;
            return;
        }
    }
    ctx->pc = 0x188744u;
    // 0x188744: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x188744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    ctx->pc = 0x188748u;
}
