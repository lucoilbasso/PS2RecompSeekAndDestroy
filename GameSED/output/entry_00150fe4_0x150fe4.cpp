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

// Function: entry_00150fe4
// Address: 0x150fe4 - 0x151000
void entry_00150fe4_0x150fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150fe4_0x150fe4");
#endif

    ctx->pc = 0x150fe4u;

    // 0x150fe4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x150FE4u;
    {
        const bool branch_taken_0x150fe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FE4u;
        // 0x150fe8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fe4) {
            ctx->pc = 0x15103Cu;
            return;
        }
    }
    ctx->pc = 0x150FECu;
    // 0x150fec: 0x92030575  lbu         $v1, 0x575($s0)
    ctx->pc = 0x150fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    // 0x150ff0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150FF0u;
    {
        const bool branch_taken_0x150ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FF0u;
        // 0x150ff4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ff0) {
            ctx->pc = 0x151000u;
            return;
        }
    }
    ctx->pc = 0x150FF8u;
    // 0x150ff8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x150FF8u;
    {
        const bool branch_taken_0x150ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FF8u;
        // 0x150ffc: 0xc4429904  lwc1        $f2, -0x66FC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ff8) {
            ctx->pc = 0x151034u;
            return;
        }
    }
    ctx->pc = 0x151000u;
}
