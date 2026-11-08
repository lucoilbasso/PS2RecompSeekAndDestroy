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

// Function: entry_00183090
// Address: 0x183090 - 0x1830a4
void entry_00183090_0x183090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183090_0x183090");
#endif

    ctx->pc = 0x183090u;

    // 0x183090: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x183090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183094: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x183094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x183098: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x183098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18309c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18309Cu;
    {
        const bool branch_taken_0x18309c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18309c) {
            ctx->pc = 0x1830A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18309Cu;
            // 0x1830a0: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1830A4u;
            return;
        }
    }
    ctx->pc = 0x1830A4u;
}
