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

// Function: entry_001011bc
// Address: 0x1011bc - 0x101224
void entry_001011bc_0x1011bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001011bc_0x1011bc");
#endif

    ctx->pc = 0x1011bcu;

    // 0x1011bc: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x1011bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1011c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1011c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1011c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1011c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1011c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1011c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1011cc: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x1011ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1011d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1011d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1011d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1011d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1011d8: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x1011d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x1011dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1011dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1011e0: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x1011e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1011e4: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x1011e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x1011e8: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x1011e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1011ec: 0xfe250010  sd          $a1, 0x10($s1)
    ctx->pc = 0x1011ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 5));
    // 0x1011f0: 0xdc640018  ld          $a0, 0x18($v1)
    ctx->pc = 0x1011f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1011f4: 0xfe240018  sd          $a0, 0x18($s1)
    ctx->pc = 0x1011f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 4));
    // 0x1011f8: 0xdc650020  ld          $a1, 0x20($v1)
    ctx->pc = 0x1011f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1011fc: 0xfe250020  sd          $a1, 0x20($s1)
    ctx->pc = 0x1011fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 5));
    // 0x101200: 0xdc640028  ld          $a0, 0x28($v1)
    ctx->pc = 0x101200u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x101204: 0xfe240028  sd          $a0, 0x28($s1)
    ctx->pc = 0x101204u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 4));
    // 0x101208: 0xdc650030  ld          $a1, 0x30($v1)
    ctx->pc = 0x101208u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x10120c: 0xfe250030  sd          $a1, 0x30($s1)
    ctx->pc = 0x10120cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 5));
    // 0x101210: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x101210u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x101214: 0xfe240038  sd          $a0, 0x38($s1)
    ctx->pc = 0x101214u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 4));
    // 0x101218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x101218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10121c: 0x3e00008  jr          $ra
    ctx->pc = 0x10121Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10121Cu;
        // 0x101220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10121Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101224u;
}
