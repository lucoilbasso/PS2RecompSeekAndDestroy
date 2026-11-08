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

// Function: entry_0013b204
// Address: 0x13b204 - 0x13b234
void entry_0013b204_0x13b204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b204_0x13b204");
#endif

    ctx->pc = 0x13b204u;

    // 0x13b204: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13b204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b208: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13B208u;
    {
        const bool branch_taken_0x13b208 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b208) {
            ctx->pc = 0x13B20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B208u;
            // 0x13b20c: 0x8e0201f8  lw          $v0, 0x1F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B238u;
            return;
        }
    }
    ctx->pc = 0x13B210u;
    // 0x13b210: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x13b210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x13b214: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B214u;
    {
        const bool branch_taken_0x13b214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x13B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B214u;
        // 0x13b218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b214) {
            ctx->pc = 0x13B234u;
            return;
        }
    }
    ctx->pc = 0x13B21Cu;
    // 0x13b21c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x13b21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b220: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x13b220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
    // 0x13b224: 0xe60001fc  swc1        $f0, 0x1FC($s0)
    ctx->pc = 0x13b224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
    // 0x13b228: 0xae1101f4  sw          $s1, 0x1F4($s0)
    ctx->pc = 0x13b228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 17));
    // 0x13b22c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x13b22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b230: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x13b230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    ctx->pc = 0x13b234u;
}
