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

// Function: entry_001230a8
// Address: 0x1230a8 - 0x123100
void entry_001230a8_0x1230a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001230a8_0x1230a8");
#endif

    ctx->pc = 0x1230a8u;

label_1230a8:
    // 0x1230a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1230a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1230ac: 0xac80fff8  sw          $zero, -0x8($a0)
    ctx->pc = 0x1230acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 0));
    // 0x1230b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1230b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1230b4: 0x0  nop
    ctx->pc = 0x1230b4u;
    // NOP
    // 0x1230b8: 0x0  nop
    ctx->pc = 0x1230b8u;
    // NOP
    // 0x1230bc: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1230BCu;
    {
        const bool branch_taken_0x1230bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1230C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230BCu;
        // 0x1230c0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230bc) {
            ctx->pc = 0x1230A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1230a8;
        }
    }
    ctx->pc = 0x1230C4u;
    // 0x1230c4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1230c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1230c8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1230c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1230cc: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1230ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1230d0: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x1230d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1230d4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1230d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1230d8: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x1230d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1230dc: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1230dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1230e0: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x1230e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1230e4: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1230e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1230e8: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1230e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1230ec: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x1230ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1230f0: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x1230f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1230f4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1230f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1230f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1230F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1230FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230F8u;
        // 0x1230fc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1230F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123100u;
}
