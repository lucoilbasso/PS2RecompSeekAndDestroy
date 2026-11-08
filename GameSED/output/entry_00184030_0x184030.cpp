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

// Function: entry_00184030
// Address: 0x184030 - 0x184048
void entry_00184030_0x184030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184030_0x184030");
#endif

    ctx->pc = 0x184030u;

    // 0x184030: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x184030u;
    {
        const bool branch_taken_0x184030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184030u;
        // 0x184034: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184030) {
            ctx->pc = 0x18405Cu;
            return;
        }
    }
    ctx->pc = 0x184038u;
    // 0x184038: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x184038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18403c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18403cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184040: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x184040u;
    {
        const bool branch_taken_0x184040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x184044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184040u;
        // 0x184044: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184040) {
            ctx->pc = 0x184060u;
            return;
        }
    }
    ctx->pc = 0x184048u;
}
