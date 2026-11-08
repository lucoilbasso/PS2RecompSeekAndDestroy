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

// Function: entry_001a3590
// Address: 0x1a3590 - 0x1a35a8
void entry_001a3590_0x1a3590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3590_0x1a3590");
#endif

    ctx->pc = 0x1a3590u;

    // 0x1a3590: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x1a3590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a3594: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3594u;
    {
        const bool branch_taken_0x1a3594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3594) {
            ctx->pc = 0x1A3598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3594u;
            // 0x1a3598: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A35A8u;
            return;
        }
    }
    ctx->pc = 0x1A359Cu;
    // 0x1a359c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1a359cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1a35a0: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x1A35A0u;
    {
        const bool branch_taken_0x1a35a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35A0u;
        // 0x1a35a4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35a0) {
            ctx->pc = 0x1A3814u;
            return;
        }
    }
    ctx->pc = 0x1A35A8u;
}
