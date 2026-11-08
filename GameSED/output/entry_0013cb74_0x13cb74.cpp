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

// Function: entry_0013cb74
// Address: 0x13cb74 - 0x13cb90
void entry_0013cb74_0x13cb74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cb74_0x13cb74");
#endif

    ctx->pc = 0x13cb74u;

    // 0x13cb74: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x13cb74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13cb78: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x13cb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x13cb7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CB7Cu;
    {
        const bool branch_taken_0x13cb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CB7Cu;
        // 0x13cb80: 0xc7808a34  lwc1        $f0, -0x75CC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cb7c) {
            ctx->pc = 0x13CB90u;
            return;
        }
    }
    ctx->pc = 0x13CB84u;
    // 0x13cb84: 0xc7818128  lwc1        $f1, -0x7ED8($gp)
    ctx->pc = 0x13cb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cb88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13cb88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13cb8c: 0xe7808a34  swc1        $f0, -0x75CC($gp)
    ctx->pc = 0x13cb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), bits); }
    ctx->pc = 0x13cb90u;
}
