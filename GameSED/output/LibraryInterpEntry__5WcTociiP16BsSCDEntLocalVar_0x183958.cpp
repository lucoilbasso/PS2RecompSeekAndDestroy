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

// Function: LibraryInterpEntry__5WcTociiP16BsSCDEntLocalVar
// Address: 0x183958 - 0x183a20
void LibraryInterpEntry__5WcTociiP16BsSCDEntLocalVar_0x183958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LibraryInterpEntry__5WcTociiP16BsSCDEntLocalVar_0x183958");
#endif

    switch (ctx->pc) {
        case 0x1839acu: goto label_1839ac;
        case 0x1839c0u: goto label_1839c0;
        case 0x183a00u: goto label_183a00;
        default: break;
    }

    ctx->pc = 0x183958u;

    // 0x183958: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x183958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18395c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x18395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x183960: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183964: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x183964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x183968: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x183968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18396c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x18396cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x183970: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x183970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183974: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x183974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x183978: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x183978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x18397c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x18397cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x183980: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x183980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183984: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x183984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x183988: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x183988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18398c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x18398cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x183990: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x183990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183994: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x183994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x183998: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x183998u;
    {
        const bool branch_taken_0x183998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183998u;
        // 0x18399c: 0x649821  addu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183998) {
            ctx->pc = 0x1839C0u;
            goto label_1839c0;
        }
    }
    ctx->pc = 0x1839A0u;
    // 0x1839a0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1839a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1839a4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1839A4u;
    SET_GPR_U32(ctx, 31, 0x1839ACu);
    ctx->pc = 0x1839A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839A4u;
    // 0x1839a8: 0x24847e28  addiu       $a0, $a0, 0x7E28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1839A4u, 0x1839ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839ACu;
label_1839ac:
    // 0x1839ac: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1839acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1839b0: 0x24a57e38  addiu       $a1, $a1, 0x7E38
    ctx->pc = 0x1839b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32312));
    // 0x1839b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1839b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839b8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1839B8u;
    SET_GPR_U32(ctx, 31, 0x1839C0u);
    ctx->pc = 0x1839BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839B8u;
    // 0x1839bc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1839B8u, 0x1839C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1839C0u;
label_1839c0:
    // 0x1839c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1839c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1839c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1839c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839c8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1839c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1839cc: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1839ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1839d0: 0xafb1002c  sw          $s1, 0x2C($sp)
    ctx->pc = 0x1839d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 17));
    // 0x1839d4: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x1839d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x1839d8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1839d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1839dc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1839dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1839e0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1839e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1839e4: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1839E4u;
    {
        const bool branch_taken_0x1839e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1839E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1839E4u;
        // 0x1839e8: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839e4) {
            ctx->pc = 0x1839F0u;
            goto label_1839f0;
        }
    }
    ctx->pc = 0x1839ECu;
    // 0x1839ec: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x1839ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1839f0:
    // 0x1839f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1839f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1839f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839f8: 0xc069626  jal         func_1A5898
    ctx->pc = 0x1839F8u;
    SET_GPR_U32(ctx, 31, 0x183A00u);
    ctx->pc = 0x1839FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839F8u;
    // 0x1839fc: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5898u, 0x1839F8u, 0x183A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183A00u;
label_183a00:
    // 0x183a00: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x183a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183a04: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x183a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x183a08: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x183a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183a0c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x183a0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183a10: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x183a10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183a14: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x183a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x183a18: 0x3e00008  jr          $ra
    ctx->pc = 0x183A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A18u;
        // 0x183a1c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183A20u;
}
