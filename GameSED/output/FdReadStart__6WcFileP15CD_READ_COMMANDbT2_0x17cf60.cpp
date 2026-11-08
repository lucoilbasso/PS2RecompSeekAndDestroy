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

// Function: FdReadStart__6WcFileP15CD_READ_COMMANDbT2
// Address: 0x17cf60 - 0x17d014
void FdReadStart__6WcFileP15CD_READ_COMMANDbT2_0x17cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FdReadStart__6WcFileP15CD_READ_COMMANDbT2_0x17cf60");
#endif

    switch (ctx->pc) {
        case 0x17cf94u: goto label_17cf94;
        case 0x17cff8u: goto label_17cff8;
        default: break;
    }

    ctx->pc = 0x17cf60u;

    // 0x17cf60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17cf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17cf64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cf68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17cf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17cf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17cf70: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17cf70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17cf78: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17cf78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17cf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17cf80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17cf80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17cf88: 0xae70004c  sw          $s0, 0x4C($s3)
    ctx->pc = 0x17cf88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 16));
    // 0x17cf8c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17CF8Cu;
    SET_GPR_U32(ctx, 31, 0x17CF94u);
    ctx->pc = 0x17CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF8Cu;
    // 0x17cf90: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17CF8Cu, 0x17CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF94u;
label_17cf94:
    // 0x17cf94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17cf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf98: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cf9c: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x17cf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x17cfa0: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x17cfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x17cfa4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17cfa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17cfa8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x17cfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x17cfac: 0x11380a  movz        $a3, $zero, $s1
    ctx->pc = 0x17cfacu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x17cfb0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x17cfb4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cfb8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cfbc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x17cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x17cfc0: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x17cfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x17cfc4: 0x72100b  movn        $v0, $v1, $s2
    ctx->pc = 0x17cfc4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x17cfc8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17cfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x17cfcc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cfd0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x17cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cfd4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x17cfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x17cfd8: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x17cfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x17cfdc: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x17cfdcu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x17cfe0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x17cfe4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cfe8: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17CFE8u;
    {
        const bool branch_taken_0x17cfe8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cfe8) {
            ctx->pc = 0x17CFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CFE8u;
            // 0x17cfec: 0xae670050  sw          $a3, 0x50($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CFF0u;
            goto label_17cff0;
        }
    }
    ctx->pc = 0x17CFF0u;
label_17cff0:
    // 0x17cff0: 0xc05e0e6  jal         func_178398
    ctx->pc = 0x17CFF0u;
    SET_GPR_U32(ctx, 31, 0x17CFF8u);
    ctx->pc = 0x178398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178398u, 0x17CFF0u, 0x17CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFF8u;
label_17cff8:
    // 0x17cff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17cffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d000: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17d000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d004: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17d004u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17d008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d00c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D00Cu;
        // 0x17d010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D014u;
}
