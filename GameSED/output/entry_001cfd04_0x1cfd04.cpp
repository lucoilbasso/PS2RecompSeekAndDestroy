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

// Function: entry_001cfd04
// Address: 0x1cfd04 - 0x1cfd28
void entry_001cfd04_0x1cfd04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfd04_0x1cfd04");
#endif

    ctx->pc = 0x1cfd04u;

    // 0x1cfd04: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cfd04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cfd08: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x1cfd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x1cfd0c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1CFD0Cu;
    {
        const bool branch_taken_0x1cfd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd0c) {
            ctx->pc = 0x1CFD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFD0Cu;
            // 0x1cfd10: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFC98u;
            return;
        }
    }
    ctx->pc = 0x1CFD14u;
    // 0x1cfd14: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x1cfd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1cfd18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1cfd18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1cfd1c: 0x25c5e1b8  addiu       $a1, $t6, -0x1E48
    ctx->pc = 0x1cfd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 4294959544));
    // 0x1cfd20: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x1cfd20u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1cfd24: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x1cfd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    ctx->pc = 0x1cfd28u;
}
