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

// Function: entry_00181f1c
// Address: 0x181f1c - 0x181f38
void entry_00181f1c_0x181f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181f1c_0x181f1c");
#endif

    ctx->pc = 0x181f1cu;

    // 0x181f1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x181f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181f20: 0x50640043  beql        $v1, $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x181F20u;
    {
        const bool branch_taken_0x181f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x181f20) {
            ctx->pc = 0x181F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F20u;
            // 0x181f24: 0x95c20002  lhu         $v0, 0x2($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182030u;
            return;
        }
    }
    ctx->pc = 0x181F28u;
    // 0x181f28: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181F28u;
    {
        const bool branch_taken_0x181f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F28u;
        // 0x181f2c: 0xc7a20008  lwc1        $f2, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f28) {
            ctx->pc = 0x181F38u;
            return;
        }
    }
    ctx->pc = 0x181F30u;
    // 0x181f30: 0x51e00047  beql        $t7, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x181F30u;
    {
        const bool branch_taken_0x181f30 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f30) {
            ctx->pc = 0x181F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181F30u;
            // 0x181f34: 0x8d23000c  lw          $v1, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182050u;
            return;
        }
    }
    ctx->pc = 0x181F38u;
}
