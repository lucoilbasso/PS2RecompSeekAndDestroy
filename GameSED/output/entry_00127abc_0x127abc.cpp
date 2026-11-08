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

// Function: entry_00127abc
// Address: 0x127abc - 0x127af0
void entry_00127abc_0x127abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127abc_0x127abc");
#endif

    ctx->pc = 0x127abcu;

    // 0x127abc: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x127abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x127ac0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x127AC0u;
    {
        const bool branch_taken_0x127ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AC0u;
        // 0x127ac4: 0x244300e8  addiu       $v1, $v0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ac0) {
            ctx->pc = 0x127AF0u;
            return;
        }
    }
    ctx->pc = 0x127AC8u;
    // 0x127ac8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x127ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x127acc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x127ACCu;
    {
        const bool branch_taken_0x127acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127acc) {
            ctx->pc = 0x127AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127ACCu;
            // 0x127ad0: 0x962201c2  lhu         $v0, 0x1C2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127AF4u;
            return;
        }
    }
    ctx->pc = 0x127AD4u;
    // 0x127ad4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x127ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127ad8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x127ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x127adc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x127adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127ae0: 0xe62101e4  swc1        $f1, 0x1E4($s1)
    ctx->pc = 0x127ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 484), bits); }
    // 0x127ae4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x127ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127ae8: 0xa63401ba  sh          $s4, 0x1BA($s1)
    ctx->pc = 0x127ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 442), (uint16_t)GPR_U32(ctx, 20));
    // 0x127aec: 0xe62001e8  swc1        $f0, 0x1E8($s1)
    ctx->pc = 0x127aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 488), bits); }
    ctx->pc = 0x127af0u;
}
